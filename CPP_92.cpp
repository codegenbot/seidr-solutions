Here is the completed code:

bool any_int(float a, float b, float c) {
    int ia = (int)a;
    int ib = (int)b;
    int ic = (int)c;
    return (ia == ib + ic) || (ia == ic + ib) || (ib == ia + ic) || (ib == ic + ia) || (ic == ia + ib) || (ic == ib + ia);
}