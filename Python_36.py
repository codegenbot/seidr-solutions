````
def fizz_buzz(n: int):
    """Write a program that prints the numbers from 1 to n. 
But for multiples of three print "Fizz" instead of the number and 
for the multiples of five print "Buzz". For numbers which are 
multiples of both three and five print "FizzBuzz"."""
    count = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
        elif i % 3 == 0:
            print("Fizz")
        elif i % 5 == 0:
            print("Buzz")
        else:
            print(i)
```