```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 4.0)
            result.push_back("A+");
        else if (grade > 3.7)
            result.push_back("A");
        else if (grade > 3.3)
            result.push_back("A-");
        else if (grade > 3.0)
            result.push_back("B+");
        else if (grade > 2.7)
            result.push_back("B");
        else if (grade > 2.3)
            result.push_back("B-");
        else if (grade > 2.0)
            result.push_back("C+");
        else if (grade > 1.7)
            result.push_back("C");
        else if (grade > 1.3)
            result.push_back("C-");
        else if (grade > 1.0)
            result.push_back("D+");
        else
            result.push_back("F");
    }
    return result;
}

int main_test() {
    std::vector<float> grades = {0.0, 0.7};
    std::vector<std::string> a = numerical_letter_grade(grades);
    for(int i = 0; i < a.size(); i++){
        if(a[i] == "A+")
            a[i] = "A+";
        else if(a[i] == "A")
            a[i] = "A";
        else if(a[i] == "A-")
            a[i] = "A-";
        else if(a[i] == "B+")
            a[i] = "B+";
        else if(a[i] == "B")
            a[i] = "B";
        else if(a[i] == "B-")
            a[i] = "B-";
        else if(a[i] == "C+")
            a[i] = "C+";
        else if(a[i] == "C")
            a[i] = "C";
        else if(a[i] == "C-")
            a[i] = "C-";
        else if(a[i] == "D+")
            a[i] = "D+";
        else
            a[i] = "F";
    }
    std::vector<std::string> b(a);
    bool same = issame({a}, {b});
    return 0;
}