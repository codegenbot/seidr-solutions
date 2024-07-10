def fibfib(n: int):
    if n <= 1:
        return 
    elif n % 2 == 0:  
        a, b = 0, 1
        result = [a]
        while b * b < n:
            a, b = b, a+b
            result.append(a)
        return str(result)
    else:
        print("Not implemented for odd numbers")
        print(fibfib(int(input("Enter an integer: ")))