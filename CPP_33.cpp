int main() {
    vector<int> input;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(input));
    vector<int> result = sort_third(input);
    copy(result.begin(), result.end(), ostream_iterator<int>(cout, " "));
    return 0;
}