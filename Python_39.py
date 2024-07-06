
def prime_fib(n: int):
   if n < 10:
       return 0
   fib = [0, 1]
   for i in range(2, n+1):
       fib.append(fib[i-1] + fib[i-2])
   return fib[n]