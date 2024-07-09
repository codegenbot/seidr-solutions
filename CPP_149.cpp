int main 
{
    vector<string> lst = {"hello", "world", "abc", "abcd"};
    vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"});
    
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    
    return 0;
}