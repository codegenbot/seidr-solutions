bool simplify(string x, string n) {
    char arr1[6], arr2[4];
    stringstream s1(x), s2(n);
    s1 >> arr1;
    char slash;
    s2 >> arr2[0] >> slash >> arr2[1];

    return (atoi(arr1) * atoi(&arr2[1]) == atoi(&arr2[0]) * (slash - '0'));
}