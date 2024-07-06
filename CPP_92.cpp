#include <cassert>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    return ((a == ai + bi + ci) || (b == ai + bi + ci) || (c == ai + bi + ci));
}

bool any_int(float a, float b, float c) {
    for(int i = 0; i < 3; ++i) {
        int val = (int)((i==0)?a:(i==1)?b:c);
        if(val != (int)(val)) return true;
    }
    return false;
}