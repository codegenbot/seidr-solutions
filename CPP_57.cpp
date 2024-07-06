```cpp
bool monotonic(vector<float> l) {
    bool inc = true;
    bool dec = true;

    for (int i = 1; i < l.size(); i++) {
        if ((l[i] > l[i-1]) && !dec)
            inc = false;
        else if ((l[i] < l[i-1]) && !inc)
            dec = false;
    }

    return inc || dec;
}