```
return bin(sum(int(b) for b in bin(N)[2:].replace(" ","").replace("-", "")))[2:]