def convert_to_binary(N):
    return "".join(str((N // (10**i)) % 2) for i in reversed(range(len(str(N)))))