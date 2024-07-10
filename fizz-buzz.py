[i % 15 == 0 and 'FizzBuzz' or
(i % 5 == 0 and 'Buzz' or (i % 3 == 0 and 'Fizz' or str(i))) for i in range(1, n+1)]