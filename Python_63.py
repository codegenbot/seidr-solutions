def fibfib(n: int):
    n = int(input("Enter the number of terms: "))
    if n <= 1:
        return 1
    elif n == 2:
        return 1
    else:
        a, b = 1, 1
        for _ in range(2, n+1): 
            a, b = b, a + b
        print(b)