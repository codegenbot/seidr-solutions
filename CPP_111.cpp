int main 
{
    map<pair<char,int>, int> test = histogram("a");
    assert(issameInt(histogram({"a"}), map<pair<char,int>, int>{{'a', 0}}));
    return 0;
}