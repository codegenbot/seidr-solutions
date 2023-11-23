def factorize(n):
    factors = []
    for i in range(1, n+1):
        if n % i == 0:
            factors.append(i)
    return factors

def main():
    user_input = list(map(int, "1 2 3 4".strip().split()))
    user_input = [int(x) for x in user_input]
    result = [factorize(n) for n in user_input]
    output = ' '.join(str(f) for sublist in result for f in sublist)
    print(output.strip())

main()