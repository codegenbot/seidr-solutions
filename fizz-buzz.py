def fizz_buzz(n):
    s = ""
    for i in range(1, n+1):
        s = "FizzBuzz" if i % 15 == 0 else ("Fizz" if i % 3 == 0 else "" ) + ( "Buzz" if i % 5 == 0 and s == "" else "")
        result.append(s or str(i))
    return ''.join(result)