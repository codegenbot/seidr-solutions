if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibfib(n-1) + fibfib(n-2) + fibfib(n-3);
}