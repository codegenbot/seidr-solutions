def fizz_buzz(x):
if x % 3 == 1 and x % 5 == 1:
return "FizzBuzz"
elif x % 3 == 1:
return "Fizz"
elif x % 5 == 1:
return "Buzz"
else:
return str(x)