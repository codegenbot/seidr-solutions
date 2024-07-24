using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 2, 3};

    if (issame(vec1, vec2)) {
        cout << "Vectors are the same." << endl;
    } else {
        cout << "Vectors are different." << endl;
    }

    return 0;
}