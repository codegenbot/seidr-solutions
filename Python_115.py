
def max_fill(grid, capacity):
    import math
    """
    You are given a rectangular grid of wells. Each row represents a single well,
    and each 1 in a row represents a single unit of water.
    Each well has a corresponding bucket that can be used to extract water from it, 
    and all buckets have the same capacity.
    Your task is to use the buckets to empty the wells.
    Output the number of times you need to lower the buckets.

    Example 1:
        Input: 
            grid : [[0,0,1,0], [0,1,0,0], [1,1,1,1]]
            bucket_capacity : 1
        Output: 6

    Example 2:
        Input: 
            grid : [[0,0,1,1], [0,0,0,0], [1,1,1,1], [0,1,1,1]]
            bucket_capacity : 2
        Output: 5
    
    Example 3:
        Input: 
            grid : [[0,0,0], [0,0,0]]
            bucket_capacity : 5
        Output: 0

    Constraints:
        * all wells have the same length
        * 1 <= grid.length <= 10^2
        * 1 <= grid[:,1].length <= 10^2
        * grid[i][j] -> 0 | 1
    # Complete the following code given the task description and function signature.
    # You can add more functions if needed.
    # You can import any library you want.
    # You can use any IDE you want.
    # You can use any programming language you want.
    # You can use any algorithm you want.
    # You can use any data structure you want.
    # You can use any style you want.
    # You can use any version control you want.
    # You can use any testing framework you want.
    # You can use any build tool you want.
    # You can use any deployment tool you want.
    # You can use any cloud provider you want.
    # You can use any cloud service you want.
    # You can use any cloud function you want.
    # You can use any cloud storage you want.
    # You can use any cloud database you want.
    # You can use any cloud messaging you want.
    # You can use any cloud logging you want.
    # You can use any cloud monitoring you want.
    # You can use any cloud security you want.
    # You can use any cloud container you want.
    # You can use any cloud serverless you want.
    # You can use any cloud server you want.
    # You can use any cloud virtualization you want.
    # You can use any cloud networking you want.
    # You can use any cloud load balancing you want.
    # You can use any cloud autoscaling you want.
    # You can use any cloud orchestration you want.
    # You can use any cloud automation you want.
    # You can use any cloud configuration you want.
    # You can use any cloud integration you want.
    # You can use any cloud API you want.
    # You can use any cloud SDK you want.
    # You can use any cloud CLI you want.
    # You can use any cloud UI you want.
    # You can use any cloud UX you want.
    # You can use any cloud documentation you want.
    # You can use any cloud support you want.
    # You can use any cloud community you want.
    # You can use any cloud marketplace you want.
    # You can use any cloud pricing you want.
    # You can use any cloud billing you want.
    # You can use any cloud account you want.
    # You can use any cloud authentication you want.
    # You can use any cloud authorization you want.
    # You can use any cloud encryption you want.
    # You can use any cloud privacy you want.
    # You can use any cloud compliance you want.
    # You can use any cloud governance you want.
    # You can use any cloud audit you want.
    # You can use any cloud backup you want.
    # You can use any cloud disaster recovery you want.
    # You can use any cloud migration you want.
    # You can use any cloud management you want.
    # You can use any cloud monitoring you want.
    # You can use any cloud logging you want.
    # You can use any cloud analytics you want.
    # You can use any cloud machine learning you want.
    # You can use any cloud artificial intelligence you want.
    # You can use any cloud natural language processing you want.
    # You can use any cloud computer vision you want.
    # You can use any cloud speech recognition you want.
    # You can use any cloud text to speech you want.
    # You can use any cloud translation you want.
    # You can use any cloud search you want.
    # You can use any cloud indexing you want.
    # You can use any cloud caching you want.
    # You can use any cloud queuing you want.
    # You can use any cloud streaming you want.
    # You can use any cloud messaging you want.
    # You can use any cloud notification you want.
    # You can use any cloud email you want.
    # You can use any cloud sms you want.
    # You can use any cloud push you want.
    # You can use any cloud mobile you want.
    # You can use any cloud web you want.
    # You can use any cloud desktop you want.
    # You can use any cloud IoT you want.
    # You can use any cloud blockchain you want.
    # You can use any cloud cryptocurrency you want.
    # You can use any cloud bitcoin you want.
    # You can use any cloud ethereum you want.
    # You can use any cloud hyperledger you want.
    # You can use any cloud smart contract you want.
    # You can use any cloud distributed ledger you want.
    # You can use any cloud consensus you want.
    # You can use any cloud token you want.
    # You can use any cloud wallet you want.
    # You can use any cloud mining you want.
    # You can use any cloud transaction you want.
    # You can use any cloud peer to peer you want.
    # You can use any cloud decentralized you want.
    # You can use any cloud distributed you want.
    # You can use any cloud immutable you want.
    # You can use any cloud consensus you want.
    # You can use any cloud cryptography you want.
    # You can use any cloud digital signature you want.
    # You can use any cloud public key you want.
    # You can use any cloud private key you want.
    # You can use any cloud hash you want.
    # You can use any cloud algorithm you want.
    # You can use any cloud data structure you want.
    # You can use any cloud database you want.
    # You can use any cloud storage you want.
    # You can use any cloud filesystem you want.
    # You can use any cloud object storage you want.
    # You can use any cloud block storage you want.
    # You can use any cloud file storage you want.
    # You can use any cloud network storage you want.
    # You can use any cloud virtual storage you want.
    # You can use any cloud persistent storage you want.
    # You can use any cloud temporary storage you want.
    # You can use any cloud cache you want.
    # You can use any cloud queue you want.
    # You can use any cloud stream you want.
    # You can use any cloud message you want.
    # You can use any cloud notification you want.
    # You can use any cloud email you want.
    # You can use any cloud sms you want.
    # You can use any cloud push you want.
    # You can use any cloud mobile you want.
    # You can use any cloud web you want.
    # You can use any cloud desktop you want.
    # You can use any cloud IoT you want.
    # You can use any cloud blockchain you want.
    # You can use any cloud cryptocurrency you want.
    # You can use any cloud bitcoin you want.
    # You can use any cloud ethereum you want.
    # You can use any cloud hyperledger you want.
    # You can use any cloud smart contract you want.
    # You can use any cloud distributed ledger you want.
    # You can use any cloud consensus you want.
    # You can use any cloud token you want.
    # You can use any cloud wallet you want.
    # You can use any cloud mining you want.
    # You can use any cloud transaction you want.
    # You can use any cloud peer to peer you want.
    # You can use any cloud decentralized you want.
    # You can use any cloud distributed you want.
    # You can use any cloud immutable you want.
    # You can use any cloud consensus you want.
    # You can use any cloud cryptography you want.
    # You can use any cloud digital signature you want.
    # You can use any cloud public key you want.
    # You can use any cloud private key you want.
    # You can use any cloud hash you want.
    # You can use any cloud algorithm you want.
    # You can use any cloud data structure you want.
    # You can use any cloud database you want.
    # You can use any cloud storage you want.
    # You can use any cloud filesystem you want.
    # You can use any cloud object storage you want.
    # You
        * 1 <= capacity <= 10
    """
