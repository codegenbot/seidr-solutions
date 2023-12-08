text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if any(text[i:i+len(sub_target)] == sub_target for sub_target in [target, target[::-1]])]

print(' '.join(map(str, indices)))