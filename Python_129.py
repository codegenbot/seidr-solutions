def findMinFibonacciNumbers(k: int) -> list:
    fib = [0, 1]
    while True:
        next_fib = fib[-1] + fib[-2]
        if next_fib > k:
            break
        fib.append(next_fib)
    
    result = []
    for i in range(len(fib)):
        if fib[i] <= k:
            result.append(fib[i])
        else:
            break
    
    return result

k = int(input("Enter a number: "))
print(findMinFibonacciNumbers(k))