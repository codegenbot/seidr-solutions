
<<<TASK>>>
# WRITE CODE BELOW
import math

def bouncing_balls(h0, v0, n):
    # h0 = float(input())
    # v0 = float(input())
    # n  = int(input())

    # Write your code here.
    def distance(v0, n):
        # return sum([(2**(i-1))*v0 for i in range(n+1)]) - ((2**n)*v0)/(math.log(2))
        return (2*(n-1)+3)*v0/4

    def bounciness(h0, v0):
        # return v0 / h0
        return (v0+h0) / (2*v0 + h0)
    
    if n > 0 and v0 >= 0:
        print(bounciness(h0, v0) * distance(v0, n))
    else:
        print('ERROR')

    # End of the code.
    pass
<<TASK>>>