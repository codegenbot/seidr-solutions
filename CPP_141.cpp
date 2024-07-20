int main() {
    assert(file_name_check("s.") == "No");
    string file_name = "sample.txt";
    cout << file_name_check(file_name) << endl;
    return 0;
}