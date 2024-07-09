```cpp
int testMain() {
    vector<string> actual = splitString("ahmed     , gamal");
    assert(isSameVectors(actual, {"ahmed", "gamal"}));
    return 0;
}