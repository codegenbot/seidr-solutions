def digits(n):
   product = 1
   while n > 0:
       if n % 2 == 0: # check if the digit is even
           product *= n % 10
       n //= 10
   return product