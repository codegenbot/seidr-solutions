
<<REPL>>
import sys
def main():
    # input = sys.stdin.read()
    # input = input.split('\n')
    # numCents = int(input[0])
    numCents = 5
    quarters, dimes, nickles, pennies = 0, 0, 0, 0
    if numCents >= 25:
        quarters = numCents // 25
        numCents -= quarters * 25
    if numCents >= 10:
        dimes = numCents // 10
        numCents -= dimes * 10
    if numCents >= 5:
        nickles = numCents // 5
        numCents -= nickles * 5
    pennies = numCents
    print(quarters, dimes, nickles, pennies)
<<REPL>>
