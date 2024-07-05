def decode_cyclic(s):
    while '<<<' in s:
        s = s.replace('<<<', '')
    return s

def main():
    s = "<<<" + input()
    print(decode_cyclic(s).replace(",,", ","))

from cfa35dd7_cb67_4db6_b39d_cefcf07c555e import main

if __name__ == "__main__":
    main()