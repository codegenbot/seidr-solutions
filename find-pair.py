#-*- coding:utf-8 -*-

import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
NO HAY SOLUCIONES CUANDO NO HAY DOS NÚMEROS QUE SUMA EL TARGET
"""
if __name__ == '__main__':
  with open ('rosalind_ini4.txt','r') as fil:
    a = fil.readlines()
    patron=r'^-?(\d+)'
    first_counter=True;
    n=0
    vector=[]
    for word in a:
      if first_counter==True:
        n = int(word)
        first_counter=False;
      else:
        aux=re.findall(patron,word)
        for w in aux:
          vector.append(int(w))
    
    vector_sorted=sorted(vector)
    vector_negatives=vector_sorted[:2] #append=AÑADE SOLO UN VALOR- elemento a la lista de los negativos.
    vector_positives=vector_sorted[-2:]# elementos del final a la lista de los positivos.
    first=True
    ultimo=[]
    for element in vector_negatives:
      for ele in vector_positives:
        if first==True:
          ultimo.append(element)
          ultimo.append(ele)
          first=False
        else:
          if abs(element+ele)<abs(ultimo[0]+ultimo[1]):
            ultimo.pop(0)
            ultimo.pop(0)
            ultimo.append(element)
            ultimo.append(ele)
    print (ultimo[0],ultimo[1])
