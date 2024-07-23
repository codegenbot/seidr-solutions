```
def fizz_buzz(n: int):
    count = 0
    result = ""
    for i in range(1, n + 1): 
        if i % 3 == 0:
            result += "Fizz"
        if i % 5 == 0:
            result += "Buzz" if not ("Fizz" in result) else ""
        if not result:
            result = str(i)
        count += len(result) != str(i).length
    return count