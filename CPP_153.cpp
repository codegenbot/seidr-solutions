#include <string>
#include <vector>
#include <cassert>
#include <cctype>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (string extension : extensions) {
        int cap_count = 0;
        int sm_count = 0;

        for (char c : extension) {
            if (isupper(c)) {
                cap_count++;
            } else if (islower(c)) {
                sm_count++;
            }
        }

        int strength = cap_count - sm_count;

        if (strength > max_strength) {
            strongest_extension = extension;
            max_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    // Test the function

    // Test 1
    vector<string> extensions1 = {"cpp", "h", "txt", "JPG"};
    string class_name1 = "MyClass";
    string expected1 = "MyClass.JPG";
    string result1 = Strongest_Extension(class_name1, extensions1);
    assert(result1 == expected1);
    
    // Test 2
    vector<string> extensions2 = {"html", "CSS", "JS"};
    string class_name2 = "WebPage";
    string expected2 = "WebPage.CSS";
    string result2 = Strongest_Extension(class_name2, extensions2);
    assert(result2 == expected2);

    // Test 3
    vector<string> extensions3 = {"csv", "XLS", "pdf"};
    string class_name3 = "MyData";
    string expected3 = "MyData.XLS";
    string result3 = Strongest_Extension(class_name3, extensions3);
    assert(result3 == expected3);
    
    return 0;
}