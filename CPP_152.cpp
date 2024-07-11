int* compare(int a[], int b[]) {
    sort(a, a + sizeof(a) / sizeof(a[0]));
    sort(b, b + sizeof(b) / sizeof(b[0]));
    return (int*)new int[]{sizeof(a), sizeof(b)};
}