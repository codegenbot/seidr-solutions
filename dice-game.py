
import random 

def rollDice(numSides): 
   return random.randint(1, numSides)

def playGame(peter, colin):
    petersRoll = rollDice(peter)
    colinsRoll = rollDice(colin)
    if (petersRoll > colinsRoll): 
        return "Peter wins"
    elif (petersRoll < colinsRoll): 
        return "Colin wins"
    else: 
        return "Tie"
