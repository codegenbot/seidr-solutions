
def is_prime(n):
   if n == 1:
       return False
   for i in range(2, int(n ** 0.5) + 1):
       if n % i == 0:
           return False
   return True
   
def prime_fib(n):
   fib = [0, 1]
   for i in range(2, n+1):
       fib.append(fib[i-1] + fib[i-2])
       if not is_prime(fib[-1]):
           fib.pop()
   return fib[n]