import itertools

def factorize(n):
    factors = []
    for i in range(1, n+1):
        if n % i == 0:
            factors.append(i)
    return factors

def main():
    user_input = list(map(int, input().strip().split()))

    result = [factorize(n) for n in user_input]
    output = ' '.join(map(str, itertools.chain.from_iterable(result)))
    print(output.strip())

main()