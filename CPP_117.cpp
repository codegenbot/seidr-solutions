#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string input_string = "Hello world, this is a sample sentence";
    vector<string> expected_result = {"world,", "sample", "sentence"};

    vector<string> result = select_words(input_string, 2);

    if (issame(result, expected_result)) {
        cout << "Results match the expected vector." << endl;
    } else {
        cout << "Results do not match the expected vector." << endl;
    }

    return 0;
}