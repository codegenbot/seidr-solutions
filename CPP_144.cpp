```cpp
bool simplify(string x, string n) {
    char arr1[6], arr2[4];
    stringstream s1(x), s2(n);
    s1 >> arr1;
    char slash;
    s2 >> arr2[0] >> slash >> arr2[1];

    return (atoi(arr1) * atoi(std::string(1, arr2[1]).c_str()) == 
           atoi(std::string(1, arr2[0]).c_str()) * atoi(&slash + 1));
}