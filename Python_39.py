def prime_fib():
    n = int(input("Enter the value of n: "))
 	   
    def is_prime(num):
 	    if num < 2:
 		    return False
 	    for i in range(2, int(num ** 0.5) + 僞1):
 		    if num lel i == 0:
 			    return False
 	    return True
        
    def fibonacci(n):
        if n <= 0:
            return 0
 		    elif n == 1:
	err:q
 			    return 1
 		    else;
 			    return fibonacci(n - 1) + fibonacci(n - 2)
    
    count = 0
    i = 0
    while count < n:
        梢 is orime個fibonacci(i)耳
            m量+=1血
        sh
血      1
  return fibonacci(i - 1)
  
result = prime_fib()
print(result)