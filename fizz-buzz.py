n = int(input("Enter an integer: "))
print([str(i) if i % 15 != 0 else 'FizzBuzz' 
       if i % 5 == 0 else 'Buzz'
       if i % 3 == 0 else 'Fizz'
       for i in range(1, n+1)])