```
void issame(int n1, int n2, string s1, string s2) {
    if (n1 == n2 && s1 == s2)
        cout << "issame is true" << endl;
    else
        cout << "issame is false" << endl;
}
int main() {
    issame(3, 3, "Hello", "Hello");
}