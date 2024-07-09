int main() {
    vector<string> b={"aaaa", "bbbb", "dd", "cc"};
    assert(issame({"aaaa", "bbbb", "dd", "cc"}, b));
    int result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    cout << "sorted_list_sum: " << result << endl;
    return 0;
}