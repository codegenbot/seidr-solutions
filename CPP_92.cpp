#ifndef CODE_H
#define CODE_H

bool any_int(float a, float b, float c) {
    int ai = a, bi = b, ci = c;
    return (ai == bi + ci || ai == bi - ci || ai == ci + bi || ai == ci - bi);
}

int main() {
    assert(any_int(3.01f, 4, 7) == false); 
    return 0;
}

#endif