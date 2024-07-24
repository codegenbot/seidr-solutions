return sum(int(x) for x in str(sum(map(lambda x: 2*x if i % 2 == 0 else x, card))) 
          if int(x) > 9 else int(x))