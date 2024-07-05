
def prime_fib(n: int):
   fib = [0, 1]
   while len(fib) <= n:
       current = fib[-1] + fib[-2]
       if isprime(current):
           fib.append(current)
   return fib[n]