int main 
{
    vector<string> test = {"271", "137", "314"};
    vector<string> expected = {"the number of odd elements 2 in the string 1", 
                               "the number of odd elements 1 in the string 2", 
                               "the number of odd elements 0 in the string 3"};
    assert(issame(odd_count(test), expected));
    return 0;
}