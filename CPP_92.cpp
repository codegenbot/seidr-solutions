Here is the completed code:

bool any_int(float a, float b, float c) {
    if (ceil(a) == ceil(b) + ceil(c) || 
        ceil(b) == ceil(a) + ceil(c) || 
        ceil(c) == ceil(a) + ceil(b)) 
        return true;
    return false;