def fizz_buzz(x):
    return "FizzBuzz" if str(x) % "35" in ["0", "3", "5"] else "Buzz" if str(x) % "5" == "0" else "Fizz" if str(x) % "3" == "0" else str(x)