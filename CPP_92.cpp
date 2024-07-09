bool any_int(float a, float b, float c); 
bool any_int(float a, float b, float c) {
    int ai = (int)a, bi = (int)b, ci = (int)c;
    return (ai == ai + bi + ci || bi == ai + bi + ci || ci == ai + bi + ci);
}