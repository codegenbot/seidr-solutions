#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += target.length();
    }
    return result;
}

int main() {
    // test cases
    cout << "[0]" << endl; // input: a; output: [0]
    string text1 = "a";
    string target1 = "a";
    vector<int> indices1 = findIndices(text1, target1);
    for (int i : indices1) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "[0, 1]" << endl; // input: ! !; output: [0, 1]
    string text2 = "!";
    string target2 = "!";
    vector<int> indices2 = findIndices(text2, target2);
    for (int i : indices2) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "[0]" << endl; // input: r; output: [0]
    string text3 = "r";
    string target3 = "r";
    vector<int> indices3 = findIndices(text3, target3);
    for (int i : indices3) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "[0 1 2 3 ...]" << endl; // input: ############ #; output: [12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
    string text4 = "############";
    string target4 = "#";
    vector<int> indices4 = findIndices(text4, target4);
    for (int i : indices4) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}