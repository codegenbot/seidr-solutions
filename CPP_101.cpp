int main() {
    vector<string> v1 = splitString("ahmed     , gamal");
    sort(v1.begin(), v1.end()); 
    assert(isSameVectors(v1, {"ahmed", "gamal"}));
    return 0;
}