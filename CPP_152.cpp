int* compare(int a[], int b[]) {
    bool isSortedA = true;
    bool isSortedB = true;

    for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
        if (a[i] < a[i - 1]) {
            isSortedA = false;
            break;
        }
    }

    for (int i = 1; i < sizeof(b) / sizeof(b[0]); i++) {
        if (b[i] < b[i - 1]) {
            isSortedB = false;
            break;
        }
    }

    if (isSortedA && !isSortedB)
        return new int[]{1};
    else if (!isSortedA && isSortedB)
        return new int[]{-1};
    else if (!isSortedA && !isSortedB)
        return new int[] {0};
    else
        return new int[]{0};

}