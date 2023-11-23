def main():
    user_input = list(map(int, input().strip().split()))
    result = [factorize(n) for n in user_input]
    output = " ".join(str(f) for sublist in result for f in sublist)
    print(output.strip())


main()