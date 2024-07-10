```
def fizz_buzz(n: int):
    result = [str(i) for i in range(1, n+1)]
    for i in range(1, n+1):
        if i % 3 == 0:
            result[i-1] = "Fizz" + result[i-1] if result[i-1].isdigit() else "Fizz"
        if i % 5 == 0:
            result[i-1] = "Buzz" + result[i-1] if not result[i-1].startswith("Fizz") and result[i-1].isdigit() else "Buzz"
        if i % 15 == 0:
            result[i-1] = "FizzBuzz" 
    return "\n".join(result)