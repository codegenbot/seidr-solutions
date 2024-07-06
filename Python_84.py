def solve(N):
    if N < 2:
        return "1" * N
    else:
        binary = bin(N)[2:].replace("1", "*").replace("0", "+")
        equation = ""
        for i in range(len(binary)):
            if i % 4 == 3 and i != len(binary) - 1:
                equation += f"+{binary[i-3:i+1]}"
            else:
                equation += f"{'+' if binary[i] == '0' else '*'}{binary[i]}"
        return equation